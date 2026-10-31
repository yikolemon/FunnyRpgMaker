/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001a350 */

void __thiscall FUN_1001a350(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int *local_2c;
  int local_28;
  uint local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_2c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100592b0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (param_2 < 0x40000000) {
    local_20 = (undefined1 *)&local_2c;
    iVar2 = FUN_10001426(param_2 * 4);
    local_24 = param_2;
    local_14 = 0;
    iVar1 = iVar2 + param_2 * 4;
    local_2c = param_1;
    local_28 = iVar2;
    FUN_1001659a(iVar2,iVar1);
    param_1[1] = iVar1;
    *(undefined1 *)(param_1 + 2) = 1;
    *param_1 = iVar2;
    local_28 = 0;
    local_14 = 0xffffffff;
    FUN_1001a46e();
    *unaff_FS_OFFSET = local_1c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10228760(0xc);
}

