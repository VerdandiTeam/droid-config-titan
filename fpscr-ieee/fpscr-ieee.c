/*
 * Undo the ARM "RunFast" FPU mode (flush-to-zero + default-NaN) that
 * Sailfish glibc sets in every process (0002-ARM-default-to-FPU-RunFast-mode.patch).
 *
 * The Adreno 3xx shader compiler moves integer constants through VFP
 * registers as raw bits; with flush-to-zero they become 0, which breaks
 * every GLES3 shader that uses integer literals (e.g. Gecko's WebRender).
 *
 * Loaded through /etc/ld.so.preload, so it runs before any thread is
 * created; new threads inherit the cleared FPSCR.
 */
__attribute__((constructor)) static void fpscr_ieee(void)
{
    unsigned int f;
    __asm__ volatile("vmrs %0, fpscr" : "=r"(f));
    f &= ~0x03000000u;
    __asm__ volatile("vmsr fpscr, %0" :: "r"(f));
}
