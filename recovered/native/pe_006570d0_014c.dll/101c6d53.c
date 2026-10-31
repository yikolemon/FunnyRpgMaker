/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c6d53 */

int __fastcall FUN_101c6d53(undefined4 param_1,int param_2,undefined4 *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_18;
  iVar2 = FUN_101c4970(param_1,&local_18);
  iVar3 = local_18;
  if (local_18 == 0) {
    if (iVar2 == param_2) {
      FUN_101c4970(param_1,&local_18);
      iVar3 = local_18;
      if (((local_18 != 0) || (iVar3 = FUN_101c4672(param_1,0x10), iVar3 != 0)) ||
         (uVar1 = FUN_101c4692(param_1,&local_18), iVar3 = local_18, local_18 != 0))
      goto LAB_101c6e1e;
      if (uVar1 != 0) {
        uVar5 = (uint)uVar1;
        do {
          iVar2 = FUN_101c4970(param_1,&local_18);
          iVar3 = local_18;
          if (local_18 != 0) goto LAB_101c6e1e;
          if (iVar2 == 2) {
            uVar4 = FUN_101c4970(param_1,&local_18);
            if ((local_18 == 0) && (FUN_101c4970(param_1,&local_18), local_18 == 0)) {
              *param_3 = uVar4;
              iVar3 = 0;
              goto LAB_101c6e1e;
            }
          }
          else {
            iVar3 = FUN_101c4672(param_1,8);
            local_18 = iVar3;
            if (iVar3 != 0) goto LAB_101c6e1e;
          }
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    }
    iVar3 = 2;
  }
LAB_101c6e1e:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_18)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar3;
}

