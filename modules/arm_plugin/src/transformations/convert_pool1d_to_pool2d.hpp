// Copyright (C) 2020-2021 Intel Corporation
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include <ngraph/pass/graph_rewrite.hpp>

namespace ArmPlugin {
namespace pass {
class ConvertMaxPool1D: public ngraph::pass::MatcherPass {
public:
    ConvertMaxPool1D();
};

class ConvertAvgPool1D: public ngraph::pass::MatcherPass {
public:
    ConvertAvgPool1D();
};
}  // namespace pass
}  // namespace ArmPlugin
