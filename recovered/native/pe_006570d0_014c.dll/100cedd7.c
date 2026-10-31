/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100cedd7 */

undefined4 FUN_100cedd7(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  DWORD DStack_20;
  DWORD local_1c;
  DWORD local_18;
  DWORD local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&DStack_20;
  if ((param_2 < 0x678) || (*param_1 != 0x678)) {
    SetLastError(0xc1);
    uVar2 = 0;
    goto LAB_100cef2c;
  }
  local_14 = 0xffffffff;
  local_18 = 0xffffffff;
  local_1c = 0xffffffff;
  uVar2 = 0;
  if (param_1[6] == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = param_1[0x19d] != *(int *)(param_1[6] + 0x10);
  }
  iVar1 = FUN_100f86ef(param_1[4],param_1[1],0x40,&local_14);
  if (iVar1 == 0) goto LAB_100cef2c;
  iVar1 = FUN_100f86ef(param_1[5],param_1[2],0x40,&local_18);
  if (iVar1 == 0) {
LAB_100cef1d:
    VirtualProtect((LPVOID)param_1[4],param_1[1],local_14,&DStack_20);
  }
  else {
    FUN_1025b2d0(param_1[4],param_1 + 7,param_1[1]);
    FUN_1025b2d0(param_1[5],param_1 + 0x17,param_1[2]);
    if (!bVar3 && param_1[6] != 0) {
      iVar1 = FUN_100f86ef(param_1[6],param_1[3],0x40,&local_1c);
      if (iVar1 == 0) {
        VirtualProtect((LPVOID)param_1[5],param_1[2],local_18,&DStack_20);
        goto LAB_100cef1d;
      }
      FUN_1025b2d0(param_1[6],param_1 + 0x199,param_1[3]);
      VirtualProtect((LPVOID)param_1[6],param_1[3],local_1c,&DStack_20);
    }
    VirtualProtect((LPVOID)param_1[5],param_1[2],local_18,&DStack_20);
    VirtualProtect((LPVOID)param_1[4],param_1[1],local_14,&DStack_20);
    FUN_100cedb5(param_1);
    uVar2 = 1;
  }
LAB_100cef2c:
  if (DAT_10388d00 != (local_10 ^ (uint)&DStack_20)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return uVar2;
}

