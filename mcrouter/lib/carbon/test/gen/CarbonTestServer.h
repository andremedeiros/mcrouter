/*
 *  Copyright (c) 2017, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

/*
 *  THIS FILE IS AUTOGENERATED. DO NOT MODIFY IT; ALL CHANGES WILL BE LOST IN
 *  VAIN.
 *
 *  @generated
 */
#pragma once

#include <mcrouter/lib/carbon/TypeList.h>
#include <mcrouter/lib/network/CarbonRequestHandler.h>

#include "mcrouter/lib/carbon/test/gen/CarbonTestMessages.h"

namespace carbon {
namespace test {

namespace detail {

using CarbonTestRequestList = carbon::List<
    AnotherRequest,
    TestRequest,
    TestRequestStringKey,
    facebook::memcache::McExecRequest,
    facebook::memcache::McQuitRequest,
    facebook::memcache::McShutdownRequest,
    facebook::memcache::McStatsRequest,
    facebook::memcache::McVersionRequest,
    test2::util::YetAnotherRequest>;

} // detail

template <class OnRequest>
class CarbonTestRequestHandler
    : public carbon::
          CarbonRequestHandler<OnRequest, detail::CarbonTestRequestList> {
 public:
  static constexpr const char* name = "CarbonTest";

  template <class... Args>
  explicit CarbonTestRequestHandler(Args&&... args)
      : carbon::CarbonRequestHandler<OnRequest, detail::CarbonTestRequestList>(
            std::forward<Args>(args)...) {}
};

} // test
} // carbon
