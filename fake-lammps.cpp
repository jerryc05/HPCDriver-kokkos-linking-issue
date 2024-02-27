#include <string>

const char *kokkos_fn();

// We use different function signiture here to effectively
// "rename" those function as if we ran the SSX helper.

#ifdef LAMMPS_ENABLE_CUDA
std::string lammps_fn_cuda() {
  return std::string("CUDA   LAMMPS + ") + kokkos_fn();
}

#else

std::string lammps_fn_openmp() {
  return std::string("OpenMP LAMMPS + ") + kokkos_fn();
}
#endif
