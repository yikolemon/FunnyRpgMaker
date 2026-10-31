/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140498288 */

undefined8 FUN_140498288(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1[1];
  uVar2 = *(undefined8 *)*param_1;
  uVar3 = FUN_1404a6230(uVar2);
  uVar4 = FUN_140497fd8(*(undefined8 *)param_1[2],*(undefined8 *)param_1[3],
                        *(undefined8 *)param_1[4],*(undefined8 *)*param_1,param_1[1]);
  FUN_1404a6344(uVar3,uVar2,uVar1);
  return uVar4;
}

