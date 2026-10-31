/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10131f58 */

void __thiscall FUN_10131f58(undefined4 param_1,uint param_2,float param_3)

{
  int iVar1;
  float fVar2;
  int iVar3;
  char cVar4;
  float fVar5;
  undefined4 uVar6;
  float local_34;
  float local_30;
  ulonglong local_2c;
  float local_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  uint local_14;
  
  iVar3 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_34;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  iVar1 = *(int *)(iVar3 + 0x14cc);
  if (*(char *)(iVar1 + 0xfe) == '\0') {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 1) != 0) {
        local_30 = *(float *)(iVar1 + 0x144);
        local_34 = *(float *)(iVar1 + 0x274);
        uVar6 = CONCAT31((int3)((uint)param_1 >> 8),1);
        if ((param_2 & 4) == 0) {
          fVar5 = 0.0;
        }
        else {
          fVar2 = *(float *)(iVar1 + 0x1e8);
          fVar5 = 0.0;
          if (fVar2 != 0.0) {
            local_30 = *(float *)(iVar1 + 0x188) + *(float *)(iVar1 + 0x50);
            local_34 = *(float *)(iVar1 + 0x50) + *(float *)(iVar1 + 0x58);
            FUN_101692e8();
            uVar6 = 0;
            fVar5 = fVar2;
          }
        }
        fStack_20 = *(float *)(iVar1 + 0x148);
        fStack_18 = param_3 + fStack_20;
        local_2c = (ulonglong)(uint)param_3 << 0x20;
        fStack_1c = local_34;
        local_34 = fVar5;
        local_24 = local_30;
        local_30 = (float)uVar6;
        FUN_1010c810(&local_2c,0xbf800000);
        cVar4 = FUN_1010c9d8(&local_24,0,0,0);
        if (cVar4 != '\0') {
          uVar6 = FUN_100fcb39(0x1c,0x3f800000);
          FUN_1018b85a(&local_24,&fStack_1c,uVar6,0,0);
          if (*(char *)(iVar3 + 0x2748) == '\x01') {
            FUN_100fd6a8(&local_24,"--------------------------------\n",0);
          }
        }
        if (local_30._0_1_ == '\0') {
          FUN_1016932e();
          *(undefined4 *)((int)local_34 + 0x1c) = *(undefined4 *)(iVar1 + 0x148);
        }
      }
    }
    else {
      local_24 = *(float *)(iVar1 + 0x144);
      fStack_20 = *(float *)(iVar1 + 0x148);
      fStack_1c = param_3 + local_24;
      fStack_18 = *(float *)(iVar1 + 0x170) + fStack_20;
      local_2c = (ulonglong)(uint)param_3;
      FUN_1010c810(&local_2c,0xbf800000);
      cVar4 = FUN_1010c9d8(&local_24,0,0,0);
      if (cVar4 != '\0') {
        uVar6 = FUN_100fcb39(0x1c,0x3f800000);
        FUN_1018b85a(&local_24,&fStack_1c,uVar6,0,0);
        if (*(char *)(iVar3 + 0x2748) == '\x01') {
          FUN_10110bf6(&DAT_1033032b);
        }
      }
    }
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_34)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

