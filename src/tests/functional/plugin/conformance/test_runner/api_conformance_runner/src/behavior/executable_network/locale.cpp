// Copyright (C) 2018-2022 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//

#include "behavior/executable_network/locale.hpp"
#include "conformance.hpp"

using namespace BehaviorTestsDefinitions;
namespace {
    INSTANTIATE_TEST_SUITE_P(smoke_CustomLocaleTest, CustomLocaleTest,
                            ::testing::Combine(
                                ::testing::Values("ru_RU.UTF-8"),
                                ::testing::Values(ov::test::conformance::targetDevice)),
                            CustomLocaleTest::getTestCaseName);
}  // namespace
