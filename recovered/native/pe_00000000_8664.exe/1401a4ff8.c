/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401a4ff8 */

undefined8 FUN_1401a4ff8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1[1];
  uVar2 = *(undefined8 *)*param_1;
  uVar3 = FUN_1401b28a0(uVar2);
  uVar4 = FUN_1401a4d48(*(undefined8 *)param_1[2],*(undefined8 *)param_1[3],
                        *(undefined8 *)param_1[4],*(undefined8 *)*param_1,param_1[1]);
  FUN_1401b29b4(uVar3,uVar2,uVar1);
  return uVar4;
}

