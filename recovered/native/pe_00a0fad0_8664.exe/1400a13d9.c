/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400a13d9 */

undefined8 * FUN_1400a13d9(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_140007025();
  FUN_140007025();
  local_38 = param_1;
  FUN_14004199e(param_1);
  FUN_1400411a8(local_38,0x104,0);
  puVar2 = local_38;
  do {
    puVar5 = puVar2;
    if (7 < (ulonglong)puVar2[3]) {
      puVar5 = (undefined8 *)*puVar2;
    }
    puVar4 = param_2;
    if (7 < (ulonglong)param_2[3]) {
      puVar4 = (undefined8 *)*param_2;
    }
    uVar1 = *(uint *)(puVar2 + 2);
    uVar3 = FUN_1400dc5e0(puVar4,uVar1,puVar5);
    FUN_1400411a8(puVar2,uVar3 & 0xffffffff,0);
  } while (uVar1 <= (uint)uVar3);
  local_40 = FUN_140007025();
  local_48[0] = (undefined4)(uVar3 >> 0x20);
  if (uVar3 >> 0x20 == 0) {
    return local_38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14004137b("absolute",local_48,param_2);
}

