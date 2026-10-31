/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026f25f */

undefined4 __fastcall FUN_1026f25f(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  
  uVar1 = param_1[1];
  uVar2 = *(undefined4 *)*param_1;
  uVar3 = FUN_102771f9(uVar2);
  uVar4 = FUN_1026f054(*(undefined4 *)param_1[2],*(undefined4 *)param_1[3],*(undefined4 *)param_1[4]
                       ,*(undefined4 *)*param_1,param_1[1]);
  FUN_102772e2(uVar3,uVar2,uVar1);
  return uVar4;
}

