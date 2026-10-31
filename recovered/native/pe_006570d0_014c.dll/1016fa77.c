/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1016fa77 */

undefined4 __fastcall FUN_1016fa77(int param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  undefined4 uVar4;
  int iVar5;
  int *local_1c;
  undefined1 auStack_18 [4];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_1c;
  uVar1 = *(uint *)(param_1 + 0xac);
  iVar5 = 0x5c;
  local_1c = param_2;
  do {
    if (uVar1 < *(uint *)(param_1 + 0xb0)) {
LAB_1016fab4:
      uVar1 = uVar1 + 1;
      *(uint *)(param_1 + 0xac) = uVar1;
    }
    else if (*(int *)(param_1 + 0x20) != 0) {
      FUN_10170e8c();
      uVar1 = *(uint *)(param_1 + 0xac);
      goto LAB_1016fab4;
    }
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  iVar5 = FUN_10171b39();
  iVar2 = FUN_10171b39();
  if (*(int *)(param_1 + 0x10) == 0) {
LAB_1016faed:
    if (*(uint *)(param_1 + 0xac) < *(uint *)(param_1 + 0xb0)) {
LAB_1016faff:
      iVar3 = FUN_1017315f(4,0);
      if (iVar3 != 0) {
        FUN_10171b1f();
        FUN_10171b39();
        FUN_10171b39();
        _Dst = (void *)FUN_10173127(4,0);
        if (_Dst != (void *)0x0) {
          _memset(_Dst,0xff,iVar5 * iVar2 * 4);
          iVar3 = FUN_10174675(iVar2,auStack_18,_Dst);
          if (iVar3 == 0) {
            thunk_FUN_10274120(_Dst);
          }
          *local_1c = iVar5;
          *param_3 = iVar2;
          uVar4 = FUN_101717e3(iVar5,iVar2);
          if (DAT_10388d00 == (local_14 ^ (uint)&local_1c)) {
            return uVar4;
          }
          goto LAB_1016fbdb;
        }
      }
    }
  }
  else {
    iVar3 = (**(code **)(param_1 + 0x18))(*(undefined4 *)(param_1 + 0x1c));
    if (iVar3 == 0) goto LAB_1016faff;
    if (*(int *)(param_1 + 0x20) != 0) goto LAB_1016faed;
  }
  FUN_10170e07();
  if (DAT_10388d00 == (local_14 ^ (uint)&local_1c)) {
    return 0;
  }
LAB_1016fbdb:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

