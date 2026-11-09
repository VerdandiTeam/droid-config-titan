// titan: the system FFmpeg's VP9 NEON code crashes the browser on unaligned
// frame buffers; keep streaming sites (YouTube) on H.264 instead of VP9/WebM.
pref("media.mediasource.webm.enabled", false);
