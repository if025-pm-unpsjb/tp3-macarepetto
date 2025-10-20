#! /bin/sh
novnc_proxy --vnc localhost:5900 --listen localhost:6900 >/dev/null 2>&1 &
