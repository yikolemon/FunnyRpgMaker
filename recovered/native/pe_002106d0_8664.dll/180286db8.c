/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180286db8 */

undefined8 FUN_180286db8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1[1];
  uVar2 = *(undefined8 *)*param_1;
  uVar3 = FUN_180294d60(uVar2);
  uVar4 = FUN_180286b08(*(undefined8 *)param_1[2],*(undefined8 *)param_1[3],
                        *(undefined8 *)param_1[4],*(undefined8 *)*param_1,param_1[1]);
  FUN_180294e74(uVar3,uVar2,uVar1);
  return uVar4;
}

