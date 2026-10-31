/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400558e4 */

undefined8 FUN_1400558e4(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  bool bVar5;
  undefined1 local_1a8;
  undefined7 uStack_1a7;
  undefined1 *local_1a0;
  undefined1 local_198 [240];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined1 local_98 [16];
  longlong local_88;
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  uVar3 = 1;
  if ((*(char *)(param_1 + 0x130) == '\x01') && (uVar3 = 7, *(char *)(param_1 + 0xe9) == '\x01')) {
    lVar1 = param_1 + 0x48;
    FUN_1400802a2(lVar1);
    if (*(char *)(param_1 + 0xe8) == '\x01') {
      FUN_140080e60(lVar1,local_58);
      FUN_140055cae(local_78,param_1 + 0x110,&DAT_140173c42);
      FUN_140059abc(&local_1a8);
      FUN_1400ae561(local_98,&local_1a8);
      FUN_140005242(&local_1a8);
      FUN_140005242(local_78);
      FUN_140005242(local_58);
      if (local_88 == 0) {
        FUN_140080e60(lVar1,local_78);
        local_a8 = L"UberWolfLib: Could not find protection file: {}";
        local_a0 = 0x2f;
        FUN_140052dd3(local_58,&local_a8,local_78);
        FUN_140052d74(&local_1a8,&DAT_1401cc978,local_58);
        FUN_140052e4f(local_198);
        FUN_140052e84(&local_1a8);
        FUN_140005242(local_58);
        FUN_140005242(local_78);
        uVar3 = 4;
        bVar5 = false;
      }
      else {
        local_1a8 = 0;
        local_58[0] = 0;
        iVar2 = FUN_140054ae2(param_1,local_98);
        bVar5 = iVar2 == 0;
        uVar3 = 9;
      }
      FUN_140005242(local_98);
      if (!bVar5) {
        return uVar3;
      }
    }
    FUN_140080552(lVar1,&local_1a8);
    if ((undefined1 *)CONCAT71(uStack_1a7,local_1a8) == local_1a0) {
      uVar3 = 10;
    }
    else {
      FUN_140017200(param_2,&DAT_1401728de,0);
      for (puVar4 = (undefined1 *)CONCAT71(uStack_1a7,local_1a8); puVar4 != local_1a0;
          puVar4 = puVar4 + 1) {
        FUN_14000cf50(param_2,*puVar4);
      }
      uVar3 = 0;
      if (*(char *)(param_1 + 0x133) != '\0') {
        FUN_140080e80(lVar1);
      }
    }
    FUN_140016e5c(&local_1a8);
  }
  return uVar3;
}

