/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008334f */

undefined8 * FUN_14008334f(undefined8 *param_1)

{
  byte bVar1;
  undefined1 *puVar2;
  bool bVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 local_68 [8];
  longlong local_60;
  longlong local_58;
  uint local_48;
  undefined8 *local_38;
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_38 = param_1;
  FUN_1400ab5af(local_68);
  uVar6 = ((uint)*(byte *)(local_60 + 6) * (uint)*(byte *)(local_60 + 3) & 0x3ff) +
          (uint)*(byte *)(local_60 + 4);
  bVar1 = *(byte *)(local_60 + 0x13);
  uVar10 = local_48;
  uVar5 = uVar6;
  do {
    while (uVar7 = uVar5, uVar5 = uVar6, uVar5 != 0) {
      uVar6 = (int)uVar10 % (int)uVar5;
      uVar10 = uVar5;
      uVar5 = uVar7;
    }
    bVar3 = 1 < (int)uVar10;
    uVar6 = uVar7 + 1;
    uVar10 = local_48;
    uVar5 = uVar7 + 1;
  } while (bVar3);
  uVar10 = 0;
  while( true ) {
    if (bVar1 <= uVar10) {
      local_29 = 0;
      puVar2 = (undefined1 *)local_38[1];
      if (puVar2 == (undefined1 *)local_38[2]) {
        FUN_1400660b8(local_38,puVar2,&local_29);
      }
      else {
        *puVar2 = 0;
        local_38[1] = local_38[1] + 1;
      }
      for (lVar11 = 0; lVar11 != 4; lVar11 = lVar11 + 1) {
        if ((undefined1 *)local_38[1] == (undefined1 *)local_38[2]) {
          FUN_1400660b8();
        }
        else {
          *(undefined1 *)local_38[1] = local_68[lVar11];
          local_38[1] = local_38[1] + 1;
        }
      }
      FUN_140016e5c(&local_60);
      return local_38;
    }
    uVar8 = (ulonglong)((uint)*(byte *)(local_60 + 7) + (uVar10 * uVar7) % local_48 + 0x1e);
    if ((ulonglong)(local_58 - local_60) <= uVar8) break;
    if ((undefined1 *)local_38[1] == (undefined1 *)local_38[2]) {
      FUN_1400660b8();
    }
    else {
      *(undefined1 *)local_38[1] = *(undefined1 *)(local_60 + uVar8);
      local_38[1] = local_38[1] + 1;
    }
    uVar10 = uVar10 + 1;
  }
  FUN_140079428();
  pcVar4 = (code *)swi(3);
  puVar9 = (undefined8 *)(*pcVar4)();
  return puVar9;
}

