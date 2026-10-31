/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140052ff2 */

undefined8 * FUN_140052ff2(undefined8 *param_1)

{
  uint uVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 local_40 [2];
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_140007025();
  FUN_140007025();
  local_30 = param_1;
  FUN_14004199e(param_1);
  FUN_1400411a8(local_30,0x104,0);
  puVar4 = local_30;
  do {
    puVar5 = puVar4;
    if (7 < (ulonglong)puVar4[3]) {
      puVar5 = (undefined8 *)*puVar4;
    }
    uVar1 = *(uint *)(puVar4 + 2);
    uVar3 = FUN_1400dd160(uVar1,puVar5);
    FUN_1400411a8(puVar4,uVar3 & 0xffffffff,0);
  } while (uVar1 <= (uint)uVar3);
  local_38 = FUN_140007025();
  local_40[0] = (undefined4)(uVar3 >> 0x20);
  if (uVar3 >> 0x20 == 0) {
    return local_30;
  }
  FUN_1400599bd("current_path()",local_40);
  pcVar2 = (code *)swi(3);
  puVar4 = (undefined8 *)(*pcVar2)();
  return puVar4;
}

