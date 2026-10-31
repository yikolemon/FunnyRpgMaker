/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001eb4c */

undefined8 FUN_18001eb4c(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 ****ppppuVar4;
  undefined8 uVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 ***local_58 [2];
  ulonglong local_48;
  ulonglong local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  uVar5 = *param_1;
  while ((0x3e < *(int *)(param_1 + 0xe) + 1U ||
         ((0x4800800000000001U >> ((ulonglong)(*(int *)(param_1 + 0xe) + 1U) & 0x3f) & 1) == 0))) {
    FUN_18001d674(param_1);
  }
  uVar1 = *param_1;
  FUN_18001d8e4(param_1,param_2,param_2 == 0x3a);
  FUN_18001d8e4(param_1,0x5d,param_2 == 0x3a);
  if (param_2 == 0x3a) {
    uVar3 = FUN_180019d5a(param_1[0xb],uVar5,uVar1,*(uint *)(param_1 + 0xd) >> 8 & 1);
    if ((short)uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18001d772(param_1,1);
    }
    FUN_18001e156(param_1 + 7,uVar3,0);
    uVar5 = 2;
  }
  else {
    FUN_18001ed2c(param_1[0xb],local_58,uVar5,uVar1);
    if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18001d772(param_1,0);
    }
    if (local_48 >> 0x20 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18001d772(param_1,9);
    }
    ppppuVar4 = local_58;
    if (0xf < local_40) {
      ppppuVar4 = (undefined8 ****)local_58[0];
    }
    if (param_2 == 0x2e && local_48 == 1) {
      *(undefined1 *)((longlong)param_1 + 0x76) = *(undefined1 *)ppppuVar4;
      uVar5 = 1;
    }
    else {
      ppppuVar6 = (undefined8 ****)(local_48 + (longlong)ppppuVar4);
      ppppuVar7 = ppppuVar4;
      if ((*(byte *)((longlong)param_1 + 0x69) & 1) != 0) {
        for (; ppppuVar7 != ppppuVar6; ppppuVar7 = (undefined8 ****)((longlong)ppppuVar7 + 1)) {
          uVar2 = (**(code **)(**(longlong **)(param_1[0xb] + 8) + 0x20))
                            (*(longlong **)(param_1[0xb] + 8),*(undefined1 *)ppppuVar7);
          *(undefined1 *)ppppuVar7 = uVar2;
        }
      }
      if (param_2 == 0x3d) {
        uVar5 = 2;
        FUN_18001ed86(param_1 + 7,ppppuVar4,ppppuVar6);
      }
      else {
        uVar5 = 2;
        FUN_18001ef64(param_1 + 7,ppppuVar4,ppppuVar6);
      }
    }
    FUN_180001ef2(local_58);
  }
  return uVar5;
}

