/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10216e16 */

int __fastcall FUN_10216e16(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_1c;
  local_1c = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_2 + 0x84) = 0;
  *(undefined4 *)(param_2 + 0x88) = 0;
  *(undefined4 *)(param_2 + 0x8c) = 0;
  uVar2 = FUN_101c4a88(param_1);
  iVar3 = FUN_101c4970(param_1,&local_18);
  iVar4 = local_18;
  if (local_18 != 0) goto LAB_10216e68;
  while (iVar3 == 0x774f4646) {
    local_18 = FUN_101c461e(param_1,uVar2);
    iVar4 = local_18;
    if ((local_18 != 0) || (local_18 = FUN_10217071(), iVar4 = local_18, local_18 != 0))
    goto LAB_10216e68;
    param_1 = *(int *)(param_2 + 0x68);
    uVar2 = FUN_101c4a88(param_1);
    iVar3 = FUN_101c4970(param_1,&local_18);
    iVar4 = local_18;
    if (local_18 != 0) goto LAB_10216e68;
  }
  iVar4 = 2;
  if (iVar3 < 0x4f54544f) {
    if (iVar3 < 0x10000) {
      if ((iVar3 != -0x5a949d9c) && (iVar3 != -0x5a938c8c)) goto LAB_10216e68;
    }
    else if ((iVar3 != 0x10000) && (iVar3 != 0x20000)) goto LAB_10216e68;
  }
  else if (iVar3 < 0x74746366) {
    if ((iVar3 != 0x4f54544f) && (iVar3 != 0x74727565)) goto LAB_10216e68;
  }
  else if ((iVar3 != 0x74746366) && (iVar3 != 0x74797031)) goto LAB_10216e68;
  *(undefined4 *)(param_2 + 0x84) = 0x74746366;
  if (iVar3 == 0x74746366) {
    local_18 = FUN_101c4f57(param_1,&DAT_10321f30,(undefined4 *)(param_2 + 0x84));
    iVar4 = local_18;
    if (local_18 == 0) {
      uVar1 = *(uint *)(param_2 + 0x8c);
      if (uVar1 == 0) {
        iVar4 = 8;
      }
      else {
        iVar4 = 10;
        if (uVar1 <= *(uint *)(param_1 + 4) >> 5) {
          uVar2 = FUN_101c2a50(local_1c,4,0,uVar1,0,&local_18);
          *(undefined4 *)(param_2 + 0x90) = uVar2;
          iVar4 = local_18;
          if ((local_18 == 0) &&
             (local_18 = FUN_101c4b69(param_1,*(int *)(param_2 + 0x8c) << 2), iVar4 = local_18,
             local_18 == 0)) {
            if (0 < *(int *)(param_2 + 0x8c)) {
              iVar4 = 0;
              do {
                uVar2 = FUN_101c4ce4(param_1);
                *(undefined4 *)(*(int *)(param_2 + 0x90) + iVar4 * 4) = uVar2;
                iVar4 = iVar4 + 1;
              } while (iVar4 < *(int *)(param_2 + 0x8c));
            }
            FUN_101c4c66(param_1);
            iVar4 = local_18;
          }
        }
      }
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x88) = 0x10000;
    *(undefined4 *)(param_2 + 0x8c) = 1;
    puVar5 = (undefined4 *)FUN_101c21f6(local_1c,4,&local_18);
    *(undefined4 **)(param_2 + 0x90) = puVar5;
    iVar4 = local_18;
    if (local_18 == 0) {
      *puVar5 = uVar2;
    }
  }
LAB_10216e68:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar4;
}

