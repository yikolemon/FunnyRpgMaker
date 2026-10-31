/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040c1c4 */

undefined4 * __thiscall FUN_0040c1c4(void *this,undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  code *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_28;
  switch(*(undefined1 *)this) {
  case 0:
    FUN_0040c398(param_1,*param_2);
    break;
  case 1:
    FUN_0040c3a3(param_1,(undefined4 *)*param_2,*(uint *)((int)this + 8));
    break;
  case 2:
    FUN_0040c6df(param_1,(undefined4 *)*param_2,*(uint *)((int)this + 8));
    break;
  case 3:
    FUN_0040c958(param_1,(undefined4 *)*param_2,*(uint *)((int)this + 8),*(int *)((int)this + 0xc));
    break;
  case 4:
    FUN_0040cda4(param_1,(undefined4 *)*param_2,*(uint *)((int)this + 8),*(int *)((int)this + 0xc));
    break;
  case 5:
    FUN_0040d180(param_1,(undefined4 *)*param_2,*(char *)((int)this + 8));
    break;
  case 6:
    FUN_0040d208(param_1,(undefined4 *)*param_2,*(undefined2 *)((int)this + 8));
    break;
  case 7:
    FUN_0040d242(param_1,(undefined4 *)*param_2,*(float *)((int)this + 8));
    break;
  case 8:
    FUN_0040e217(param_1,(undefined4 *)*param_2,*(double *)((int)this + 8));
    break;
  case 9:
    FUN_0040e217(param_1,(undefined4 *)*param_2,*(double *)((int)this + 8));
    break;
  case 10:
    FUN_0041063c(param_1,(undefined4 *)*param_2,*(uint *)((int)this + 8));
    break;
  case 0xb:
    FUN_0040d1a9(param_1,(undefined4 *)*param_2,*(short **)((int)this + 8));
    break;
  case 0xc:
    FUN_00410712(param_1,(undefined4 *)*param_2,*(undefined2 **)((int)this + 8),
                 *(int *)((int)this + 0xc));
    break;
  case 0xd:
    local_28 = *(code **)((int)this + 0xc);
    local_24 = *param_2;
    local_20 = param_2[1];
    local_1c = param_2[2];
    local_18 = param_2[3];
    (*local_28)(param_2[4],&local_24,*(undefined4 *)((int)this + 8));
    *param_1 = local_24;
    break;
  default:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_28)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_28);
  }
  return param_1;
}

