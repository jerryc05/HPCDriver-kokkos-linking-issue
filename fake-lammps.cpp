#include <string>

const char *kokkos_fn();

#ifdef LAMMPS_ENABLE_CUDA
extern c std::string lammps_fn_cuda() {
  return std::string("Computed by CUDA LAMMPS + ") + kokkos_fn();
}

#else

std::string lammps_fn_openmp() {
  return std::string("Computed by Serial/OpenMP LAMMPS + ") + kokkos_fn();
}
#endif
