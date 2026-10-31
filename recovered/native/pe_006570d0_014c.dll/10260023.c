/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10260023 */

void __fastcall FUN_10260023(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined4 local_464 [277];
  undefined4 local_10;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  uVar1 = param_1[1];
  uVar2 = *(undefined4 *)*param_1;
  uVar3 = FUN_102771f9(uVar2);
  local_464[0] = *(undefined4 *)*param_1;
  FUN_1025f1f1(local_464,*(undefined4 *)param_1[2],((undefined4 *)param_1[2])[1],
               *(undefined4 *)param_1[3],param_1[1],*(undefined4 *)param_1[4]);
  local_10 = 0;
  FUN_1025f397();
  FUN_1025ed21();
  FUN_102772e2(uVar3,uVar2,uVar1);
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

