/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e87e6 */

int __fastcall FUN_101e87e6(int param_1,int param_2)

{
  int iVar1;
  short sVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int local_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 local_1c;
  int iStack_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_2c;
  iVar5 = *(int *)(param_1 + 0x68);
  iVar4 = *(int *)(param_1 + 0x2e0);
  uVar8 = 0x56564152;
  puVar3 = (undefined1 *)(iVar4 + 0x2c);
  if (param_2 == 0) {
    uVar8 = 0x48564152;
    puVar3 = (undefined1 *)(iVar4 + 0x20);
  }
  local_2c = *(int *)(iVar5 + 0x1c);
  *puVar3 = 1;
  iStack_18 = (**(code **)(param_1 + 0x204))(param_1,uVar8,iVar5,&local_1c);
  iVar7 = iStack_18;
  if (iStack_18 == 0) {
    iStack_28 = iVar4;
    iStack_24 = param_2;
    iStack_20 = FUN_101c4a88(iVar5);
    sVar2 = FUN_101c4692(iVar5,&iStack_18);
    iVar7 = iStack_18;
    if ((((iStack_18 == 0) && (iStack_18 = FUN_101c4672(iVar5,2), iVar7 = iStack_18, iStack_18 == 0)
         ) && (iVar7 = 8, sVar2 == 1)) &&
       ((iVar4 = FUN_101c4970(iVar5,&iStack_18), iVar7 = iStack_18, iStack_18 == 0 &&
        (iVar5 = FUN_101c4970(iVar5,&iStack_18), iVar7 = iStack_18, iStack_18 == 0)))) {
      iVar6 = FUN_101bff17(local_2c,0x20,&iStack_18);
      iVar1 = iStack_20;
      if ((char)iStack_24 == '\0') {
        *(int *)(iStack_28 + 0x28) = iVar6;
      }
      else {
        *(int *)(iStack_28 + 0x34) = iVar6;
      }
      iVar7 = iStack_18;
      if (((iStack_18 == 0) &&
          (iVar7 = FUN_101e5ca3(param_1,iVar4 + iStack_20,iVar6), iStack_18 = iVar7, iVar7 == 0)) &&
         ((local_2c = param_1, iVar5 == 0 ||
          (iVar7 = FUN_101e5ac8(param_1,iVar5 + iVar1,iVar6 + 0x14,iVar6,local_1c), iVar7 == 0)))) {
        puVar3 = (undefined1 *)(iStack_28 + 0x2d);
        uVar9 = 0x10;
        if ((char)iStack_24 == '\0') {
          uVar9 = 2;
          puVar3 = (undefined1 *)(iStack_28 + 0x21);
        }
        *puVar3 = 1;
        *(uint *)(local_2c + 0x2e4) = *(uint *)(local_2c + 0x2e4) | uVar9;
        iVar7 = 0;
      }
    }
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_2c)) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

