/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403041c7 */

void Unwind_1403041c7(ulonglong param_1)

{
  char cVar1;
  undefined8 uVar2;
  char *in_RAX;
  longlong unaff_RBP;
  undefined8 *unaff_RSI;
  int iVar3;
  
  *in_RAX = *in_RAX + (char)in_RAX;
  while( true ) {
    cVar1 = FUN_14036b33b(param_1);
    FUN_1402133c2();
    iVar3 = *(int *)(unaff_RBP + 0x24);
    if (cVar1 != '\0') {
      *(int *)unaff_RSI[1] = iVar3;
    }
    iVar3 = iVar3 + 1;
    *(int *)(unaff_RBP + 0x24) = iVar3;
    if (*(int *)(unaff_RBP + -0x4c) <= iVar3) break;
    uVar2 = FUN_14026c6f4(s___AV___Func_impl_no_alloc_V<lamb_140613f30._72_4_,
                          (longlong)*(int *)*unaff_RSI,(longlong)iVar3);
    *(undefined8 *)(unaff_RBP + 0x18) = uVar2;
    *(char **)(unaff_RBP + 8) =
         "t4 out_col = input.col * texture0.Sample(sampler0, input.uv);             return out_col;             }"
    ;
    *(undefined8 *)(unaff_RBP + 0x10) = 5;
    FUN_140303fe4();
    param_1 = (ulonglong)*(uint *)(unaff_RBP + 0x24);
  }
  FUN_140304138();
  return;
}

