const char *kokkos_fn() {
#ifdef KOKKOS_ENABLE_CUDA
  return "CUDA   Kokkos";
#endif
  return "OpenMP Kokkos";
}
