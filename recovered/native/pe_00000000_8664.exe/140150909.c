/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140150909 */

undefined8 FUN_140150909(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0x96;
  if (((undefined *)param_1[2] != &DAT_140e9cfb0) && ((undefined *)param_1[2] != &DAT_140e9d000)) {
    uVar1 = FUN_1401299f6(*(undefined8 *)(*(longlong *)(*param_1 + 0x90) + 8),&DAT_140ec386a);
    uVar3 = 0;
    puVar2 = (undefined8 *)FUN_14012c267(uVar1,"tt-cmaps",0);
    if ((puVar2 != (undefined8 *)0x0) && ((code *)*puVar2 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014015097f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)*puVar2)(param_1,param_2);
      return uVar3;
    }
  }
  return uVar3;
}

