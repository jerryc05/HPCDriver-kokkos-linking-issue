#include <string>

const char *kokkos_fn();

#ifdef LAMMPS_ENABLE_CUDA
std::string lammps_fn_cuda() {
  return std::string("CUDA   LAMMPS + ") + kokkos_fn();
}

#else

std::string lammps_fn_openmp() {
  return std::string("OpenMP LAMMPS + ") + kokkos_fn();
}
#endif
