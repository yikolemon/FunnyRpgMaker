/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001e694 */

void FUN_18001e694(longlong param_1,byte param_2,byte param_3)

{
  byte *pbVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  uint *puVar8;
  byte bVar9;
  undefined1 local_d0 [32];
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  uint *local_70;
  byte local_63;
  byte local_62;
  byte local_61;
  undefined8 local_60 [4];
  
  local_60[0] = 0xfffffffffffffffe;
  lVar2 = *(longlong *)(param_1 + 8);
  local_62 = param_3;
  local_61 = param_2;
  if ((*(byte *)(param_1 + 0x11) & 8) == 0) {
    if (param_2 <= param_3) {
      if (*(longlong *)(lVar2 + 0x28) == 0) {
        puVar6 = (undefined8 *)FUN_180239630(0x20);
        puVar6[2] = 0;
        puVar6[3] = 0;
        *puVar6 = 0;
        puVar6[1] = 0;
        *(undefined8 **)(lVar2 + 0x28) = puVar6;
      }
      uVar7 = (ulonglong)param_2;
      do {
        pbVar1 = (byte *)(*(longlong *)(lVar2 + 0x28) + (uVar7 >> 3));
        *pbVar1 = *pbVar1 | (byte)(1 << ((byte)uVar7 & 7));
        uVar4 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar4;
      } while (param_3 + 1 != uVar4);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_180239ab0(8);
  }
  FUN_18001b936(*(undefined8 *)(param_1 + 0x18),local_b0,&local_61,local_60);
  FUN_18001b936(*(undefined8 *)(param_1 + 0x18),local_90,&local_62,&local_61);
  iVar5 = FUN_18001b9c8(local_b0,local_90);
  if (0 < iVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_180239ab0(8);
  }
  for (uVar4 = 0; uVar4 < 0x100; uVar4 = uVar4 + 1) {
    local_63 = (byte)uVar4;
    FUN_18001b936(*(undefined8 *)(param_1 + 0x18),local_d0,&local_63,&local_62);
    iVar5 = FUN_18001b9c8(local_b0,local_d0);
    if ((iVar5 < 1) && (iVar5 = FUN_18001b9c8(local_d0,local_90), iVar5 < 1)) {
      puVar8 = *(uint **)(lVar2 + 0x28);
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)FUN_180239630(0x20);
        puVar8[4] = 0;
        puVar8[5] = 0;
        puVar8[6] = 0;
        puVar8[7] = 0;
        puVar8[0] = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
        puVar8[3] = 0;
        *(uint **)(lVar2 + 0x28) = puVar8;
        local_70 = puVar8;
      }
      pbVar1 = (byte *)((longlong)puVar8 + (ulonglong)(uVar4 >> 3));
      *pbVar1 = *pbVar1 | (byte)(1 << ((byte)uVar4 & 7));
    }
    FUN_180001ef2(local_d0);
  }
  FUN_180001ef2(local_90);
  FUN_180001ef2(local_b0);
  puVar8 = *(uint **)(lVar2 + 0x38);
  if (puVar8 == (uint *)0x0) {
    puVar8 = (uint *)FUN_180239630(0x10);
    puVar8[0] = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    *(uint **)(lVar2 + 0x38) = puVar8;
    local_70 = puVar8;
  }
  else {
    uVar4 = puVar8[1];
    bVar9 = local_61;
    if (uVar4 < *puVar8) goto code_r0x00018001e889;
  }
  bVar9 = local_61;
  FUN_18001f226(puVar8,1);
  uVar4 = puVar8[1];
code_r0x00018001e889:
  bVar3 = local_62;
  puVar8[1] = uVar4 + 1;
  *(byte *)(*(longlong *)(puVar8 + 2) + (ulonglong)uVar4) = bVar9;
  puVar8 = *(uint **)(lVar2 + 0x38);
  uVar4 = puVar8[1];
  if (*puVar8 <= uVar4) {
    FUN_18001f226(puVar8,1);
    uVar4 = puVar8[1];
  }
  puVar8[1] = uVar4 + 1;
  *(byte *)(*(longlong *)(puVar8 + 2) + (ulonglong)uVar4) = bVar3;
  return;
}

