/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00411618 */

undefined4 * __thiscall FUN_00411618(void *this,undefined4 *param_1,int *param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined1 local_14 [4];
  uint local_10;
  
  local_10 = DAT_0050e8c0 ^ (uint)local_14;
  switch(*(undefined1 *)this) {
  case 0:
    FUN_0040c398(param_1,*(undefined4 *)*param_2);
    break;
  case 1:
    FUN_00411880(param_1,*(undefined4 **)*param_2,*(uint *)((int)this + 8),(int *)param_2[1],
                 ((undefined4 *)*param_2)[3]);
    break;
  case 2:
    FUN_004130ba(param_1,*(undefined4 **)*param_2,*(uint *)((int)this + 8),(int *)param_2[1],
                 ((undefined4 *)*param_2)[3]);
    break;
  case 3:
    FUN_004134d7(param_1,*(undefined4 **)*param_2,*(uint *)((int)this + 8),
                 *(uint *)((int)this + 0xc),(int *)param_2[1],((undefined4 *)*param_2)[3]);
    break;
  case 4:
    FUN_00413c14(param_1,*(undefined4 **)*param_2,*(uint *)((int)this + 8),
                 *(uint *)((int)this + 0xc),(int *)param_2[1],((undefined4 *)*param_2)[3]);
    break;
  case 5:
    piVar1 = (int *)param_2[1];
    FUN_00414048(param_1,*(undefined4 **)*param_2,*(byte *)((int)this + 8),*piVar1,piVar1[1],
                 piVar1[2],piVar1[3],piVar1[4],((undefined4 *)*param_2)[3]);
    break;
  case 6:
    piVar1 = (int *)param_2[1];
    FUN_00411cbe(param_1,*(undefined4 **)*param_2,*(ushort *)((int)this + 8),*piVar1,piVar1[1],
                 piVar1[2],piVar1[3],piVar1[4],((undefined4 *)*param_2)[3]);
    break;
  case 7:
    FUN_00414874(param_1,*(undefined4 **)*param_2,*(float *)((int)this + 8),(int *)param_2[1],
                 ((undefined4 *)*param_2)[3]);
    break;
  case 8:
    FUN_004165ec(param_1,*(undefined4 **)*param_2,*(double *)((int)this + 8),(int *)param_2[1],
                 ((undefined4 *)*param_2)[3]);
    break;
  case 9:
    FUN_004165ec(param_1,*(undefined4 **)*param_2,*(double *)((int)this + 8),(int *)param_2[1],
                 ((undefined4 *)*param_2)[3]);
    break;
  case 10:
    FUN_0041784a(param_1,*(undefined4 **)*param_2,*(uint *)((int)this + 8),(int *)param_2[1]);
    break;
  case 0xb:
    FUN_00414683(param_1,*(undefined4 **)*param_2,*(undefined1 (**) [32])((int)this + 8),
                 (int *)param_2[1]);
    break;
  case 0xc:
    FUN_004123b5(param_1,*(undefined4 **)*param_2,*(ushort **)((int)this + 8),
                 *(int *)((int)this + 0xc),(int *)param_2[1]);
    break;
  default:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (DAT_0050e8c0 == (local_10 ^ (uint)local_14)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_10 ^ (uint)local_14);
}

