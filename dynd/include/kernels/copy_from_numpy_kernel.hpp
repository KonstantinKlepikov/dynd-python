#pragma once

#include <dynd/kernels/base_kernel.hpp>
#include <dynd/kernels/base_virtual_kernel.hpp>

#include "config.hpp"

namespace pydynd {
namespace nd {

  struct copy_from_numpy_kernel
      : dynd::nd::base_virtual_kernel<copy_from_numpy_kernel> {
    static intptr_t instantiate(
        const dynd::arrfunc_type_data *af, const dynd::ndt::arrfunc_type *af_tp,
        char *data, void *ckb, intptr_t ckb_offset,
        const dynd::ndt::type &dst_tp, const char *dst_arrmeta, intptr_t nsrc,
        const dynd::ndt::type *src_tp, const char *const *src_arrmeta,
        dynd::kernel_request_t kernreq, const dynd::eval::eval_context *ectx,
        const dynd::nd::array &kwds,
        const std::map<dynd::nd::string, dynd::ndt::type> &tp_vars);
  };

} // namespace pydynd::nd
} // namespace pydynd