/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1003bcd8 */

void __thiscall FUN_1003bcd8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined1 local_58 [21];
  undefined1 local_43 [3];
  int local_40;
  int local_28;
  uint local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_58;
  local_14 = 0xffffffff;
  local_18 = &LAB_10059fc0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_1003a106(10,param_1 + 4,param_4);
  local_14 = 0;
  local_24 = *(uint *)(param_2 + 0x10);
  local_28 = *(int *)(param_2 + 0x14);
  uVar5 = __alldiv(local_24,local_28,10000000,0);
  uVar4 = (uint)((ulonglong)uVar5 >> 0x20);
  uVar3 = (int)uVar4 >> 0x1f;
  uVar1 = (uint)uVar5 ^ uVar3;
  iVar2 = FUN_100255fd(local_58,uVar1 - uVar3,((uVar4 ^ uVar3) - uVar3) - (uint)(uVar1 < uVar3),0x15
                      );
  local_40 = iVar2;
  if ((SBORROW4(-1,local_28) != SBORROW4(-1 - local_28,(uint)(0xff676980 < local_24))) ==
      (int)((-1 - local_28) - (uint)(0xff676980 < local_24)) < 0) {
    local_40 = iVar2 + -1;
    *(undefined1 *)(iVar2 + -1) = 0x2d;
  }
  FUN_1001909c(local_40,local_43);
  local_14 = 0xffffffff;
  FUN_1003a17a();
  ExceptionList = local_1c;
  return;
}

