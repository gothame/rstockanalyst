#if defined(RSD_LIBRARY)
#  define RSDSHARED_EXPORT Q_DECL_EXPORT
#else
#  define RSDSHARED_EXPORT Q_DECL_IMPORT
#endif