/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012bc0d */

undefined8 FUN_14012bc0d(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0x23;
  if ((param_1 != 0) && ((*(byte *)(param_1 + 8) & 8) != 0)) {
    pcVar1 = *(code **)(**(longlong **)(param_1 + 0x90) + 0x30);
    uVar3 = 7;
    if (pcVar1 != (code *)0x0) {
      puVar2 = (undefined8 *)(*pcVar1)(*(longlong **)(param_1 + 0x90),"sfnt-table");
      if (puVar2 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014012bc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*(code *)*puVar2)(param_1,param_2,param_3,param_4);
        return uVar3;
      }
    }
  }
  return uVar3;
}

