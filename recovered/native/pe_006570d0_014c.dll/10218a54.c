/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10218a54 */

int __fastcall FUN_10218a54(undefined4 param_1,int param_2,ushort param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  uVar5 = (uint)param_3;
  local_14 = DAT_10388d00 ^ (uint)&local_20;
  iVar3 = 3;
  if (uVar5 <= param_4 && uVar5 < 0x183) {
    uVar1 = *(undefined4 *)(param_2 + 0x1c);
    local_20 = param_2;
    iVar3 = FUN_101c2a50(uVar1,2,0,uVar5,0,&local_18);
    if (local_18 == 0) {
      local_18 = FUN_101c4b69(local_20,uVar5);
      if (local_18 == 0) {
        if (param_3 != 0) {
          iVar2 = *(int *)(local_20 + 0x20);
          uVar4 = 0;
          do {
            uVar6 = (int)*(char *)(iVar2 + uVar4) + uVar4;
            if (0x101 < uVar6) {
              uVar6 = 0;
            }
            *(short *)(iVar3 + uVar4 * 2) = (short)uVar6;
            uVar4 = uVar4 + 1;
          } while (uVar5 != uVar4);
        }
        FUN_101c4c66(local_20);
        *(ushort *)(local_1c + 2) = param_3;
        *(int *)(local_1c + 8) = iVar3;
        iVar3 = 0;
        goto LAB_10218ad3;
      }
    }
    FUN_101c0017(uVar1,iVar3);
    iVar3 = local_18;
  }
LAB_10218ad3:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_20)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

