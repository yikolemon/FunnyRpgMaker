/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101316d8 */

void FUN_101316d8(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  float10 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  float local_28;
  float local_24;
  undefined8 local_20;
  undefined8 local_18;
  uint local_10;
  
  iVar2 = DAT_1039d74c;
  local_10 = DAT_10388d00 ^ (uint)&local_4c;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  iVar1 = *(int *)(iVar2 + 0x14cc);
  if (*(char *)(iVar1 + 0xfe) == '\0') {
    local_38 = *(float *)(iVar2 + 0x1228);
    local_48 = *(float *)(iVar2 + 0xd10) + *(float *)(iVar2 + 0xd10) + local_38;
    local_4c = *(float **)(iVar1 + 0x170);
    fVar4 = (float10)FUN_100ea38a();
    local_48 = local_38;
    local_4c = (float *)(float)fVar4;
    fVar4 = (float10)FUN_100fdbca();
    local_3c = (float)fVar4;
    local_28 = *(float *)(iVar1 + 0x144);
    local_24 = *(float *)(iVar1 + 0x148);
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    fVar5 = (float)*(undefined8 *)(iVar1 + 0x144);
    fVar7 = *(float *)(iVar2 + 0x1228) + fVar5;
    fVar6 = (float)((ulonglong)*(undefined8 *)(iVar1 + 0x144) >> 0x20);
    fVar8 = local_3c + fVar6;
    local_20 = CONCAT44(fVar8,fVar7);
    local_4c = (float *)&local_18;
    local_18 = CONCAT44(fVar8 - fVar6,fVar7 - fVar5);
    local_48 = -1.0;
    local_38 = local_3c;
    FUN_1010c810();
    local_40 = 0;
    local_44 = 0.0;
    local_48 = 0.0;
    local_4c = &local_28;
    cVar3 = FUN_1010c9d8();
    if (cVar3 != '\0') {
      local_48 = 1.0;
      local_4c = (float *)0x0;
      local_40 = FUN_100fcb39();
      local_44 = local_38 * DAT_102b70e0 + local_24;
      local_48 = DAT_102b70e0 * *(float *)(iVar2 + 0x1228) + *(float *)(iVar2 + 0xd0c) + local_28;
      local_4c = *(float **)(iVar1 + 0x2e8);
      FUN_10193c4a();
    }
    local_48 = *(float *)(iVar2 + 0xd0c) + *(float *)(iVar2 + 0xd0c);
    local_4c = (float *)0x0;
    FUN_10114a0e();
  }
  if (DAT_10388d00 == (local_10 ^ (uint)&local_4c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

