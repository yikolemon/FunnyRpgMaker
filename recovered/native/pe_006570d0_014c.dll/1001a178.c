/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001a178 */

void __thiscall FUN_1001a178(undefined4 *param_1,uint param_2)

{
  size_t _Size;
  void *_Dst;
  void *pvVar1;
  int *unaff_FS_OFFSET;
  undefined4 *local_2c;
  void *local_28;
  uint local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_2c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100592a0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (param_2 < 0x20000000) {
    _Size = param_2 * 8;
    local_20 = (undefined1 *)&local_2c;
    _Dst = (void *)FUN_10001426(_Size);
    local_24 = param_2;
    local_14 = 0xffffffff;
    pvVar1 = _Dst;
    local_2c = param_1;
    if (param_2 != 0) {
      local_28 = _Dst;
      _memset(_Dst,0,_Size);
      pvVar1 = (void *)((int)_Dst + _Size);
    }
    param_1[1] = pvVar1;
    *(undefined1 *)(param_1 + 2) = 1;
    *param_1 = _Dst;
    local_28 = (void *)0x0;
    FUN_1001a25e();
    *unaff_FS_OFFSET = local_1c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10228760(0xc);
}

