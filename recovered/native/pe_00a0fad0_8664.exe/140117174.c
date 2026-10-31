/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140117174 */

undefined8 FUN_140117174(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1[1];
  uVar2 = *(undefined8 *)*param_1;
  uVar3 = FUN_140124b18(uVar2);
  uVar4 = FUN_140116ec4(*(undefined8 *)param_1[2],*(undefined8 *)param_1[3],
                        *(undefined8 *)param_1[4],*(undefined8 *)*param_1,param_1[1]);
  FUN_140124c2c(uVar3,uVar2,uVar1);
  return uVar4;
}

