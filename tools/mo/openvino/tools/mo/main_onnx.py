# Copyright (C) 2018-2022 Intel Corporation
# SPDX-License-Identifier: Apache-2.0

import sys

from openvino.tools.mo.utils.cli_parser import get_onnx_cli_parser

if __name__ == "__main__":
    from openvino.tools.mo.main import main
    from openvino.frontend import FrontEndManager  # pylint: disable=no-name-in-module,import-error

    sys.exit(main(get_onnx_cli_parser(), FrontEndManager(), 'onnx'))
