
_supported_platform = ['os_windows', 'os_unix', 'psvita']

def can_build(env, platform):
    return env["os_family"] + env["platform"] in _supported_platform


def configure(env):
    pass
