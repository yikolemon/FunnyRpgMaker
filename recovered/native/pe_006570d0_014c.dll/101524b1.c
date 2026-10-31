/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101524b1 */

int __fastcall FUN_101524b1(undefined4 param_1,uint *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  float in_XMM0_Da;
  float in_XMM1_Da;
  float fVar4;
  float local_3c;
  float local_38;
  uint *local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_3c;
  local_38 = in_XMM1_Da;
  local_30 = in_XMM0_Da;
  iVar2 = FUN_10151d91();
  *param_2 = 0;
  local_34 = param_2;
  if (0 < iVar2) {
    fVar4 = 0.0;
    iVar3 = 0;
    do {
      local_3c = fVar4;
      FUN_10151b49(iVar3);
      if (local_18 < 1) goto LAB_1015254e;
      if ((iVar3 == 0) && (local_38 < local_20 + local_3c)) {
        iVar2 = 0;
        goto LAB_1015254e;
      }
      if (local_38 < local_1c + local_3c) {
        iVar2 = iVar3;
        if (local_30 < local_2c) goto LAB_1015254e;
        if (local_28 <= local_30) goto LAB_101525d6;
        iVar2 = 0;
        local_3c = local_2c;
        fVar4 = local_28;
        goto LAB_10152596;
      }
      iVar3 = iVar3 + local_18;
      fVar4 = local_3c + local_24;
    } while (iVar3 < iVar2);
  }
  *local_34 = 1;
  goto LAB_1015254e;
  while( true ) {
    iVar2 = FUN_101518f3();
    iVar2 = iVar2 - iVar3;
    if (local_18 <= iVar2) break;
LAB_10152596:
    local_38 = local_3c;
    FUN_10151bcb(iVar2);
    local_3c = local_3c + fVar4;
    if (local_30 < local_3c) {
      *local_34 = (uint)(iVar2 != 0);
      iVar2 = iVar3 + iVar2;
      if (local_30 < local_38 + fVar4 * DAT_102b70e0) goto LAB_1015254e;
      if (DAT_10388d00 == (local_14 ^ (uint)&local_3c)) {
        iVar2 = FUN_101518f3();
        return iVar2;
      }
      goto LAB_1015264c;
    }
  }
LAB_101525d6:
  *local_34 = 1;
  cVar1 = FUN_10142d40();
  iVar2 = local_18 + iVar3;
  if (cVar1 == '\n') {
    iVar2 = iVar3 + local_18 + -1;
  }
LAB_1015254e:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_3c)) {
    return iVar2;
  }
LAB_1015264c:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

