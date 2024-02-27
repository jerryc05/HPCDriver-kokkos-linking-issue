const char *kokkos_fn() {
#ifdef KOKKOS_ENABLE_CUDA
  return "Computed by CUDA Kokkos";
#endif
  return "Computed by Serial/OpenMP Kokkos";
}
