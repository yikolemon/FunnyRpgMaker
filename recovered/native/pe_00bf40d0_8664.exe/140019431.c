/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140019431 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140019431(int param_1,ulonglong param_2,UINT *param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  UINT local_58;
  ushort local_54 [2];
  undefined1 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if ((param_3 != (UINT *)0x0 && param_1 == 0) && ((param_3[2] & 0x10) == 0)) {
    local_58 = *param_3;
    FUN_140017a38(local_54,local_58);
    local_48 = 0;
    if ((param_2 & 0xfffffffffffffffb) == 0x100) {
      local_50 = 1;
    }
    else {
      if ((param_2 & 0xfffffffffffffffb) != 0x101) goto code_r0x000140019542;
      local_50 = 0;
    }
    if (local_58 != 0xffffffff) {
      FUN_140018798((uint *)&DAT_14012e920);
      puVar1 = (undefined8 *)*DAT_14013c948;
      while (puVar3 = puVar1, puVar3 != DAT_14013c948) {
        uVar2 = FUN_14001959a(puVar3[2],(longlong)&local_58,0x18);
        puVar1 = (undefined8 *)*puVar3;
        if ((char)uVar2 == '\0') {
          *(undefined8 **)puVar3[1] = puVar1;
          puVar1[1] = puVar3[1];
          _DAT_14013c950 = _DAT_14013c950 + -1;
          FUN_140018816((longlong)(puVar3 + 2));
          FUN_1400863f0();
        }
      }
      FUN_14008b270(0x14012e920);
    }
  }
code_r0x000140019542:
  CallNextHookEx(DAT_14013c988,param_1,param_2,(LPARAM)param_3);
  return;
}

