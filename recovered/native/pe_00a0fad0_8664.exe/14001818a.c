/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14001818a */

undefined8 FUN_14001818a(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 local_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_40 = param_2;
  if (*(longlong *)(param_1 + 0x18) == 0) {
    FUN_14000169c(local_88,"[Option Group: ");
    if (*(ulonglong *)(param_1 + 0x368) < 0x10) {
      lVar5 = param_1 + 0x350;
    }
    else {
      lVar5 = *(longlong *)(param_1 + 0x350);
    }
    puVar3 = (undefined4 *)FUN_14000b1f8(local_88,lVar5,*(undefined8 *)(param_1 + 0x360));
    local_68 = *puVar3;
    uStack_64 = puVar3[1];
    uStack_60 = puVar3[2];
    uStack_5c = puVar3[3];
    local_58 = puVar3[4];
    uStack_54 = puVar3[5];
    uStack_50 = puVar3[6];
    uStack_4c = puVar3[7];
    *(undefined8 *)(puVar3 + 4) = 0;
    *(undefined8 *)(puVar3 + 6) = 0xf;
    *(undefined1 *)puVar3 = 0;
    FUN_14000ed8c(param_2,&local_68,&DAT_1401705ae);
    FUN_1400017de(&local_68);
    FUN_1400017de(local_88);
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x370);
    lVar1 = *(longlong *)(param_1 + 0x378);
    FUN_140006874(param_2,param_1 + 8);
    if ((param_3 != '\0') && (lVar5 != lVar1)) {
      puVar2 = *(undefined8 **)(param_1 + 0x378);
      for (puVar6 = *(undefined8 **)(param_1 + 0x370); puVar6 != puVar2; puVar6 = puVar6 + 4) {
        FUN_14000cf50(local_40,0x2c);
        FUN_14000cf50(local_40,0x20);
        puVar4 = puVar6;
        if (0xf < (ulonglong)puVar6[3]) {
          puVar4 = (undefined8 *)*puVar6;
        }
        FUN_14000b1f8(local_40,puVar4,puVar6[2]);
      }
    }
  }
  return local_40;
}

