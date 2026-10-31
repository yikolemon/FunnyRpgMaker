/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402da550 */

undefined8 * FUN_1402da550(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  if (param_2[2] != 0) {
    puVar3 = param_2;
    if (7 < (ulonglong)param_2[3]) {
      puVar3 = (undefined8 *)*param_2;
    }
    iVar2 = (*(code *)s_LoadLibraryW_14059e282._6_8_)(0xfde9,0,puVar3,param_2[2],0,0,0,0);
    if (0 < iVar2) {
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = 0;
      param_1[1] = 0;
      FUN_140273118(param_1,0,iVar2);
      puVar3 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar3 = (undefined8 *)*param_1;
      }
      puVar1 = param_2 + 2;
      if (7 < (ulonglong)param_2[3]) {
        param_2 = (undefined8 *)*param_2;
      }
      (*(code *)s_LoadLibraryW_14059e282._6_8_)
                (0xfde9,0,param_2,*(undefined4 *)puVar1,puVar3,iVar2,0,0,param_1,uVar4);
      return param_1;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  return param_1;
}

