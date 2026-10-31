/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800a31b8 */

void FUN_1800a31b8(longlong param_1,longlong param_2,longlong *param_3,uint *param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_68 [8];
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  *(longlong **)(param_1 + 0x50) = param_3;
  if ((ulonglong)*param_4 != 0) {
    lVar3 = 0;
    iVar4 = 0;
    iVar6 = 0;
    do {
      iVar5 = iVar6;
      iVar7 = iVar4;
      uVar1 = *(uint *)(*param_3 + 0x7c + lVar3);
      iVar4 = iVar7 + (uint)(uVar1 < 2000);
      iVar6 = (iVar5 + 1) - (uint)(uVar1 < 2000);
      lVar3 = lVar3 + 0x80;
    } while ((ulonglong)*param_4 << 7 != lVar3);
    if (iVar4 != 0) {
      iVar7 = iVar7 + (uint)(uVar1 < 2000);
      do {
        local_68[0] = FUN_180078646(param_2 + 0x10);
        puVar2 = *(undefined4 **)(param_1 + 0x28);
        if (puVar2 == *(undefined4 **)(param_1 + 0x30)) {
          FUN_18009ab08(param_1 + 0x20,puVar2,local_68);
        }
        else {
          *puVar2 = local_68[0];
          *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 4;
        }
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    if (iVar6 != 0) {
      iVar4 = (iVar5 + 1) - (uint)(uVar1 < 2000);
      do {
        FUN_18008b8a0(param_2,local_68);
        FUN_18008c110(param_1 + 0x38,local_68);
        FUN_1800010ec(local_68);
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return;
}

