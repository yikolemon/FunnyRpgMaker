/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0045196d */

undefined4 __fastcall FUN_0045196d(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int local_14;
  uint local_10;
  
  local_10 = DAT_0050e8c0 ^ (uint)&local_14;
  if (*(int *)(param_3 + 0xc) == 0xb) {
    (**(code **)(param_3 + 0x10))(param_1,param_2);
    uVar1 = *(undefined4 *)(param_2 + 0xc);
    goto LAB_004519eb;
  }
  if (*(int *)(param_3 + 8) - 1U < 6) {
    iVar2 = param_1 + 0x8c;
    switch(*(int *)(param_3 + 8)) {
    case 1:
      break;
    default:
      goto switchD_004519a8_caseD_2;
    case 3:
      iVar2 = param_1 + 0x138;
      break;
    case 4:
      iVar2 = param_1 + 0xa4;
      break;
    case 6:
      iVar2 = param_1 + 0xc4;
    }
  }
  else {
switchD_004519a8_caseD_2:
    uVar1 = 0xa0;
    if (*(uint *)(param_1 + 300) <= *(uint *)(param_2 + 0x60)) goto LAB_004519eb;
    iVar2 = *(uint *)(param_2 + 0x60) * 0xfc + *(int *)(param_1 + 0x130);
  }
  local_14 = iVar2;
  if (*(int *)(param_3 + 0xc) - 9U < 2) {
    uVar1 = (**(code **)(param_2 + 0x44))(param_2,param_3,&local_14,0,0);
  }
  else {
    uVar1 = (**(code **)(param_2 + 0x40))(param_2,param_3,&local_14,0,0);
  }
LAB_004519eb:
  if (DAT_0050e8c0 != (local_10 ^ (uint)&local_14)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_10 ^ (uint)&local_14);
  }
  return uVar1;
}

