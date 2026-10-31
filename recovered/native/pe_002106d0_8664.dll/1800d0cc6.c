/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d0cc6 */

void FUN_1800d0cc6(longlong *param_1,longlong *param_2,ushort *param_3)

{
  ushort uVar1;
  ushort uVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  param_1 = (longlong *)*param_1;
  plVar6 = param_1 + 1;
  plVar4 = param_1;
  if (*(char *)(param_1[1] + 0x19) == '\0') {
    uVar1 = *param_3;
    plVar3 = (longlong *)param_1[1];
    do {
      uVar2 = *(ushort *)((longlong)plVar3 + 0x1a);
      bVar5 = uVar2 < uVar1;
      if (uVar2 == uVar1) {
        bVar5 = *(byte *)((longlong)plVar3 + 0x1c) < (byte)param_3[1];
      }
      if (bVar5) {
        plVar7 = plVar3 + 2;
        plVar3 = plVar4;
      }
      else {
        plVar7 = plVar3;
        if (*(char *)((longlong)param_1 + 0x19) != '\0') {
          bVar5 = uVar1 < uVar2;
          if (uVar2 == uVar1) {
            bVar5 = (byte)param_3[1] < *(byte *)((longlong)plVar3 + 0x1c);
          }
          if (bVar5) {
            param_1 = plVar3;
          }
        }
      }
      plVar4 = plVar3;
      plVar3 = (longlong *)*plVar7;
    } while (*(char *)(*plVar7 + 0x19) == '\0');
  }
  if (*(char *)((longlong)param_1 + 0x19) == '\0') {
    plVar6 = param_1;
  }
  plVar6 = (longlong *)*plVar6;
  if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
    do {
      bVar5 = *param_3 < *(ushort *)((longlong)plVar6 + 0x1a);
      if (*param_3 == *(ushort *)((longlong)plVar6 + 0x1a)) {
        bVar5 = (byte)param_3[1] < *(byte *)((longlong)plVar6 + 0x1c);
      }
      if (bVar5 != false) {
        param_1 = plVar6;
      }
      plVar6 = (longlong *)plVar6[(ulonglong)(bVar5 ^ 1) * 2];
    } while (*(char *)((longlong)plVar6 + 0x19) == '\0');
  }
  *param_2 = (longlong)plVar4;
  param_2[1] = (longlong)param_1;
  return;
}

