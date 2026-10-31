/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140348ee5 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140348ee5(ulonglong param_1,float param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  ulonglong local_88;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  ulonglong local_70;
  
  lVar4 = DAT_14062a630;
  local_70 = ram0x000140613b10 ^ (ulonglong)auStack_b8;
  *(undefined1 *)(*(longlong *)(DAT_14062a630 + 0x1608) + 0x10b) = 1;
  lVar1 = *(longlong *)(lVar4 + 0x1608);
  if (*(char *)(lVar1 + 0x10e) == '\0') {
    if ((param_1 & 2) == 0) {
      if ((param_1 & 1) != 0) {
        fVar9 = *(float *)(lVar1 + 0x158);
        fVar8 = *(float *)(lVar1 + 0x2a0);
        bVar3 = true;
        if (((param_1 & 4) == 0) || (lVar7 = *(longlong *)(lVar1 + 0x208), lVar7 == 0)) {
          lVar7 = 0;
        }
        else {
          fVar9 = *(float *)(lVar1 + 0x19c) + *(float *)(lVar1 + 0x60);
          fVar8 = *(float *)(lVar1 + 0x60) + *(float *)(lVar1 + 0x68);
          FUN_14037fb6f();
          bVar3 = false;
        }
        fStack_7c = *(float *)(lVar1 + 0x15c);
        fStack_74 = param_2 + fStack_7c;
        local_88 = (ulonglong)(uint)param_2 << 0x20;
        local_80 = fVar9;
        fStack_78 = fVar8;
        FUN_1403229e4(&local_88,DAT_1404ccdb0);
        cVar5 = FUN_140322b86(&local_80,0,0,0);
        if (cVar5 != '\0') {
          uVar2 = *(undefined8 *)(lVar1 + 800);
          uVar6 = FUN_14031276b(0x1c,DAT_1404bda40);
          local_90 = 0;
          local_98 = 0;
          FUN_1403a41f0(uVar2,&local_80,&fStack_78,uVar6);
          if (*(char *)(lVar4 + 0x2a40) == '\x01') {
            FUN_14031338e(&local_80,"_PickerHueBar",0);
          }
        }
        if (!bVar3) {
          FUN_14037fbca();
          *(undefined4 *)(lVar7 + 0x1c) = *(undefined4 *)(lVar1 + 0x15c);
        }
      }
    }
    else {
      local_80 = *(float *)(lVar1 + 0x158);
      fStack_7c = *(float *)(lVar1 + 0x15c);
      fStack_78 = param_2 + local_80;
      fStack_74 = *(float *)(lVar1 + 0x184) + fStack_7c;
      local_88 = (ulonglong)(uint)param_2;
      FUN_1403229e4(&local_88,DAT_1404ccdb0);
      cVar5 = FUN_140322b86(&local_80,0,0,0);
      if (cVar5 != '\0') {
        uVar2 = *(undefined8 *)(lVar1 + 800);
        uVar6 = FUN_14031276b(0x1c,DAT_1404bda40);
        local_90 = 0;
        local_98 = 0;
        FUN_1403a41f0(uVar2,&local_80,&fStack_78,uVar6);
        if (*(char *)(lVar4 + 0x2a40) == '\x01') {
          FUN_140326cad("dow_context");
        }
      }
    }
  }
  if (ram0x000140613b10 == (local_70 ^ (ulonglong)auStack_b8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_70 ^ (ulonglong)auStack_b8);
}

