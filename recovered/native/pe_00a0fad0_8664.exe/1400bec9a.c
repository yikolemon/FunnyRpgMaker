/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400bec9a */

undefined4 * FUN_1400bec9a(undefined4 *param_1,undefined4 *param_2)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if ((param_1 != param_2) && (param_1 + 10 != param_2)) {
    lVar4 = -0x28;
    puVar6 = param_1 + 10;
    puVar3 = param_1;
    do {
      puVar2 = puVar6;
      local_78 = *puVar2;
      uStack_74 = puVar2[1];
      uStack_70 = puVar2[2];
      uStack_6c = puVar2[3];
      local_68 = *(undefined8 *)(puVar2 + 4);
      uStack_60 = *(undefined8 *)(puVar2 + 6);
      *(undefined8 *)(puVar3 + 0xe) = 0;
      *(undefined8 *)(puVar3 + 0x10) = 7;
      *(undefined2 *)(puVar3 + 10) = 0;
      local_58 = *(ulonglong *)(puVar3 + 0x12);
      lVar5 = lVar4;
      puVar6 = puVar2;
      if (local_58 < *(ulonglong *)(param_1 + 8)) {
        do {
          FUN_14000ff1e(puVar6,puVar6 + -10);
          *(undefined8 *)(puVar6 + 8) = *(undefined8 *)(puVar6 + -2);
          lVar5 = lVar5 + 0x28;
          puVar6 = puVar6 + -10;
        } while (lVar5 != 0);
        FUN_14000ff1e(param_1,&local_78);
        *(ulonglong *)(param_1 + 8) = local_58;
      }
      else {
        puVar3 = puVar2;
        if (local_58 < *(ulonglong *)(puVar2 + -2)) {
          do {
            puVar6 = puVar3 + -10;
            FUN_14000ff1e(puVar3,puVar6);
            *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(puVar3 + -2);
            puVar1 = (ulonglong *)(puVar3 + -0xc);
            puVar3 = puVar6;
          } while (local_58 < *puVar1);
        }
        FUN_14000ff1e(puVar6,&local_78);
        *(ulonglong *)(puVar6 + 8) = local_58;
      }
      FUN_140005242(&local_78);
      lVar4 = lVar4 + -0x28;
      puVar6 = puVar2 + 10;
      puVar3 = puVar2;
    } while (puVar2 + 10 != param_2);
  }
  return param_2;
}

