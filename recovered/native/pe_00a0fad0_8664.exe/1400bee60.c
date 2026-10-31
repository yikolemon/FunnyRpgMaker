/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400bee60 */

void FUN_1400bee60(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  lVar2 = (param_2 - param_1 >> 3) * -0x3333333333333333;
  lVar3 = lVar2 >> 1;
  if (0 < lVar3) {
    uVar4 = lVar3 + 1;
    puVar1 = (undefined4 *)(param_1 + lVar3 * 0x28);
    do {
      puVar5 = puVar1 + -10;
      local_68 = *puVar5;
      uStack_64 = puVar1[-9];
      uStack_60 = puVar1[-8];
      uStack_5c = puVar1[-7];
      local_58 = puVar1[-6];
      uStack_54 = puVar1[-5];
      uStack_50 = puVar1[-4];
      uStack_4c = puVar1[-3];
      *(undefined8 *)(puVar1 + -6) = 0;
      *(undefined8 *)(puVar1 + -4) = 7;
      *(undefined2 *)puVar5 = 0;
      local_48 = *(undefined8 *)(puVar1 + -2);
      FUN_1400beffb(param_1,uVar4 - 2,lVar2,&local_68);
      FUN_140005242(&local_68);
      uVar4 = uVar4 - 1;
      puVar1 = puVar5;
    } while (1 < uVar4);
  }
  return;
}

