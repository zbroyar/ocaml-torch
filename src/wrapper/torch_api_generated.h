
// THIS FILE IS AUTOMATICALLY GENERATED, DO NOT EDIT BY HAND!

tensor atg_abs(tensor self);
tensor atg_abs_(tensor self);
tensor atg_abs_out(tensor result, tensor self);
tensor atg_acos(tensor self);
tensor atg_acos_(tensor self);
tensor atg_acos_out(tensor result, tensor self);
tensor atg_adaptive_avg_pool1d(tensor self, int *output_size_data, int output_size_len);
tensor atg_add(tensor self, tensor other);
tensor atg_add_(tensor self, tensor other);
tensor atg_add_out(tensor result, tensor self, tensor other);
tensor atg_addmm(tensor self, tensor mat1, tensor mat2);
tensor atg_addmm_out(tensor result, tensor self, tensor mat1, tensor mat2);
tensor atg_addmv(tensor self, tensor mat, tensor vec);
tensor atg_addmv_(tensor self, tensor mat, tensor vec);
tensor atg_addmv_out(tensor result, tensor self, tensor mat, tensor vec);
tensor atg_addr(tensor self, tensor vec1, tensor vec2);
tensor atg_addr_out(tensor result, tensor self, tensor vec1, tensor vec2);
tensor atg_all(tensor self, int64_t dim, int keepdim);
tensor atg_all_out(tensor result, tensor self, int64_t dim, int keepdim);
tensor atg_alpha_dropout(tensor input, double p, int train);
tensor atg_alpha_dropout_(tensor self, double p, int train);
tensor atg_any(tensor self, int64_t dim, int keepdim);
tensor atg_any_out(tensor result, tensor self, int64_t dim, int keepdim);
tensor atg_argmax1(tensor self, int64_t dim, int keepdim);
tensor atg_argmax2(tensor self);
tensor atg_argmin1(tensor self, int64_t dim, int keepdim);
tensor atg_argmin2(tensor self);
tensor atg_as_strided1(tensor self, int *size_data, int size_len, int *stride_data, int stride_len);
tensor atg_as_strided2(tensor self, int *size_data, int size_len, int *stride_data, int stride_len, int64_t storage_offset);
tensor atg_as_strided_1(tensor self, int *size_data, int size_len, int *stride_data, int stride_len);
tensor atg_as_strided_2(tensor self, int *size_data, int size_len, int *stride_data, int stride_len, int64_t storage_offset);
tensor atg_asin(tensor self);
tensor atg_asin_(tensor self);
tensor atg_asin_out(tensor result, tensor self);
tensor atg_atan(tensor self);
tensor atg_atan_(tensor self);
tensor atg_atan_out(tensor result, tensor self);
tensor atg_avg_pool1d(tensor self, int *kernel_size_data, int kernel_size_len, int *stride_data, int stride_len, int *padding_data, int padding_len, int ceil_mode, int count_include_pad);
tensor atg_baddbmm(tensor self, tensor batch1, tensor batch2);
tensor atg_baddbmm_out(tensor result, tensor self, tensor batch1, tensor batch2);
tensor atg_bartlett_window1(int64_t window_length, int options);
tensor atg_bartlett_window2(int64_t window_length, int periodic, int options);
tensor atg_bernoulli1(tensor self);
tensor atg_bernoulli2(tensor self, double p);
tensor atg_bernoulli_out(tensor result, tensor self);
tensor atg_blackman_window1(int64_t window_length, int options);
tensor atg_blackman_window2(int64_t window_length, int periodic, int options);
tensor atg_bmm(tensor self, tensor mat2);
tensor atg_bmm_out(tensor result, tensor self, tensor mat2);
tensor atg_ceil(tensor self);
tensor atg_ceil_(tensor self);
tensor atg_ceil_out(tensor result, tensor self);
tensor atg_celu(tensor self);
tensor atg_celu_(tensor self);
tensor atg_clone(tensor self);
tensor atg_conv1d(tensor input, tensor weight, tensor bias, int *stride_data, int stride_len, int *padding_data, int padding_len, int *dilation_data, int dilation_len, int64_t groups);
tensor atg_conv2d(tensor input, tensor weight, tensor bias, int *stride_data, int stride_len, int *padding_data, int padding_len, int *dilation_data, int dilation_len, int64_t groups);
tensor atg_conv3d(tensor input, tensor weight, tensor bias, int *stride_data, int stride_len, int *padding_data, int padding_len, int *dilation_data, int dilation_len, int64_t groups);
tensor atg_conv_tbc(tensor self, tensor weight, tensor bias, int64_t pad);
tensor atg_conv_transpose1d(tensor input, tensor weight, tensor bias, int *stride_data, int stride_len, int *padding_data, int padding_len, int *output_padding_data, int output_padding_len, int64_t groups, int *dilation_data, int dilation_len);
tensor atg_conv_transpose2d(tensor input, tensor weight, tensor bias, int *stride_data, int stride_len, int *padding_data, int padding_len, int *output_padding_data, int output_padding_len, int64_t groups, int *dilation_data, int dilation_len);
tensor atg_conv_transpose3d(tensor input, tensor weight, tensor bias, int *stride_data, int stride_len, int *padding_data, int padding_len, int *output_padding_data, int output_padding_len, int64_t groups, int *dilation_data, int dilation_len);
tensor atg_copy_sparse_to_sparse_(tensor self, tensor src, int non_blocking);
tensor atg_cos(tensor self);
tensor atg_cos_(tensor self);
tensor atg_cos_out(tensor result, tensor self);
tensor atg_cosh(tensor self);
tensor atg_cosh_(tensor self);
tensor atg_cosh_out(tensor result, tensor self);
tensor atg_cosine_embedding_loss(tensor input1, tensor input2, tensor target, double margin, int64_t reduction);
tensor atg_ctc_loss1(tensor log_probs, tensor targets, int *input_lengths_data, int input_lengths_len, int *target_lengths_data, int target_lengths_len, int64_t blank, int64_t reduction);
tensor atg_ctc_loss2(tensor log_probs, tensor targets, tensor input_lengths, tensor target_lengths, int64_t blank, int64_t reduction);
tensor atg_cudnn_affine_grid_generator(tensor theta, int64_t N, int64_t C, int64_t H, int64_t W);
tensor atg_cudnn_convolution_backward_bias(tensor grad_output);
tensor atg_cudnn_convolution_backward_input(int *self_size_data, int self_size_len, tensor grad_output, tensor weight, int *padding_data, int padding_len, int *stride_data, int stride_len, int *dilation_data, int dilation_len, int64_t groups, int benchmark, int deterministic);
tensor atg_cudnn_convolution_backward_weight(int *weight_size_data, int weight_size_len, tensor grad_output, tensor self, int *padding_data, int padding_len, int *stride_data, int stride_len, int *dilation_data, int dilation_len, int64_t groups, int benchmark, int deterministic);
tensor atg_cudnn_convolution_transpose_backward_bias(tensor grad_output);
tensor atg_cudnn_convolution_transpose_backward_input(tensor grad_output, tensor weight, int *padding_data, int padding_len, int *stride_data, int stride_len, int *dilation_data, int dilation_len, int64_t groups, int benchmark, int deterministic);
tensor atg_cudnn_convolution_transpose_backward_weight(int *weight_size_data, int weight_size_len, tensor grad_output, tensor self, int *padding_data, int padding_len, int *stride_data, int stride_len, int *dilation_data, int dilation_len, int64_t groups, int benchmark, int deterministic);
tensor atg_cumprod(tensor self, int64_t dim);
tensor atg_cumprod_out(tensor result, tensor self, int64_t dim);
tensor atg_cumsum(tensor self, int64_t dim);
tensor atg_cumsum_out(tensor result, tensor self, int64_t dim);
tensor atg_det(tensor self);
tensor atg_detach(tensor self);
tensor atg_detach_(tensor self);
tensor atg_diagflat(tensor self, int64_t offset);
tensor atg_diagonal(tensor self, int64_t offset, int64_t dim1, int64_t dim2);
tensor atg_div(tensor self, tensor other);
tensor atg_div_(tensor self, tensor other);
tensor atg_div_out(tensor result, tensor self, tensor other);
tensor atg_dot(tensor self, tensor tensor);
tensor atg_dot_out(tensor result, tensor self, tensor tensor);
tensor atg_dropout(tensor input, double p, int train);
tensor atg_dropout_(tensor self, double p, int train);
tensor atg_empty(int *size_data, int size_len, int options);
tensor atg_empty_like1(tensor self);
tensor atg_empty_like2(tensor self, int options);
tensor atg_empty_out(tensor result, int *size_data, int size_len);
tensor atg_empty_strided(int *size_data, int size_len, int *stride_data, int stride_len, int options);
tensor atg_eq(tensor self, tensor other);
tensor atg_erf(tensor self);
tensor atg_erf_(tensor self);
tensor atg_erf_out(tensor result, tensor self);
tensor atg_erfc(tensor self);
tensor atg_erfc_(tensor self);
tensor atg_erfc_out(tensor result, tensor self);
tensor atg_exp(tensor self);
tensor atg_exp_(tensor self);
tensor atg_exp_out(tensor result, tensor self);
tensor atg_expm1(tensor self);
tensor atg_expm1_(tensor self);
tensor atg_expm1_out(tensor result, tensor self);
tensor atg_eye1(int64_t n, int options);
tensor atg_eye2(int64_t n, int64_t m, int options);
tensor atg_eye_out1(tensor result, int64_t n);
tensor atg_eye_out2(tensor result, int64_t n, int64_t m);
tensor atg_feature_alpha_dropout(tensor input, double p, int train);
tensor atg_feature_alpha_dropout_(tensor self, double p, int train);
tensor atg_feature_dropout(tensor input, double p, int train);
tensor atg_feature_dropout_(tensor self, double p, int train);
tensor atg_fft(tensor self, int64_t signal_ndim, int normalized);
tensor atg_fill_(tensor self, tensor value);
tensor atg_flatten(tensor self, int64_t start_dim, int64_t end_dim);
tensor atg_flip(tensor self, int *dims_data, int dims_len);
tensor atg_floor(tensor self);
tensor atg_floor_(tensor self);
tensor atg_floor_out(tensor result, tensor self);
tensor atg_frobenius_norm1(tensor self);
tensor atg_frobenius_norm2(tensor self, int *dim_data, int dim_len, int keepdim);
tensor atg_frobenius_norm_out(tensor result, tensor self, int *dim_data, int dim_len, int keepdim);
tensor atg_ger(tensor self, tensor vec2);
tensor atg_ger_out(tensor result, tensor self, tensor vec2);
tensor atg_grad(tensor self);
tensor atg_grid_sampler(tensor input, tensor grid, int64_t interpolation_mode, int64_t padding_mode);
tensor atg_grid_sampler_2d(tensor input, tensor grid, int64_t interpolation_mode, int64_t padding_mode);
tensor atg_grid_sampler_3d(tensor input, tensor grid, int64_t interpolation_mode, int64_t padding_mode);
tensor atg_gru_cell(tensor input, tensor hx, tensor w_ih, tensor w_hh);
tensor atg_hamming_window1(int64_t window_length, int options);
tensor atg_hamming_window2(int64_t window_length, int periodic, int options);
tensor atg_hamming_window3(int64_t window_length, int periodic, double alpha, int options);
tensor atg_hamming_window4(int64_t window_length, int periodic, double alpha, double beta, int options);
tensor atg_hann_window1(int64_t window_length, int options);
tensor atg_hann_window2(int64_t window_length, int periodic, int options);
tensor atg_hardshrink(tensor self);
tensor atg_hinge_embedding_loss(tensor self, tensor target, double margin, int64_t reduction);
tensor atg_hspmm(tensor mat1, tensor mat2);
tensor atg_hspmm_out(tensor result, tensor mat1, tensor mat2);
tensor atg_ifft(tensor self, int64_t signal_ndim, int normalized);
tensor atg_inverse(tensor self);
tensor atg_inverse_out(tensor result, tensor self);
tensor atg_irfft(tensor self, int64_t signal_ndim, int normalized, int onesided, int *signal_sizes_data, int signal_sizes_len);
tensor atg_isclose(tensor self, tensor other, double rtol, double atol, int equal_nan);
tensor atg_kl_div(tensor self, tensor target, int64_t reduction);
tensor atg_kl_div_backward(tensor grad_output, tensor self, tensor target, int64_t reduction);
tensor atg_linear(tensor input, tensor weight, tensor bias);
tensor atg_log(tensor self);
tensor atg_log10(tensor self);
tensor atg_log10_(tensor self);
tensor atg_log10_out(tensor result, tensor self);
tensor atg_log1p(tensor self);
tensor atg_log1p_(tensor self);
tensor atg_log1p_out(tensor result, tensor self);
tensor atg_log2(tensor self);
tensor atg_log2_(tensor self);
tensor atg_log2_out(tensor result, tensor self);
tensor atg_log_(tensor self);
tensor atg_log_out(tensor result, tensor self);
tensor atg_log_softmax(tensor self, int64_t dim);
tensor atg_log_softmax_backward_data(tensor grad_output, tensor output, int64_t dim, tensor self);
tensor atg_logdet(tensor self);
tensor atg_logsumexp(tensor self, int64_t dim, int keepdim);
tensor atg_logsumexp_out(tensor result, tensor self, int64_t dim, int keepdim);
tensor atg_margin_ranking_loss(tensor input1, tensor input2, tensor target, double margin, int64_t reduction);
tensor atg_matmul(tensor self, tensor other);
tensor atg_matmul_out(tensor result, tensor self, tensor other);
tensor atg_matrix_power(tensor self, int64_t n);
tensor atg_matrix_rank1(tensor self, double tol, int symmetric);
tensor atg_matrix_rank2(tensor self, int symmetric);
tensor atg_max_pool1d(tensor self, int *kernel_size_data, int kernel_size_len, int *stride_data, int stride_len, int *padding_data, int padding_len, int *dilation_data, int dilation_len, int ceil_mode);
tensor atg_max_pool2d(tensor self, int *kernel_size_data, int kernel_size_len, int *stride_data, int stride_len, int *padding_data, int padding_len, int *dilation_data, int dilation_len, int ceil_mode);
tensor atg_max_pool3d(tensor self, int *kernel_size_data, int kernel_size_len, int *stride_data, int stride_len, int *padding_data, int padding_len, int *dilation_data, int dilation_len, int ceil_mode);
tensor atg_max_values(tensor self, int64_t dim, int keepdim);
tensor atg_mean1(tensor self);
tensor atg_mean2(tensor self, int64_t dim, int keepdim);
tensor atg_mean_out(tensor result, tensor self, int64_t dim, int keepdim);
tensor atg_min_values(tensor self, int64_t dim, int keepdim);
tensor atg_miopen_convolution_backward_bias(tensor grad_output);
tensor atg_miopen_convolution_backward_input(int *self_size_data, int self_size_len, tensor grad_output, tensor weight, int *padding_data, int padding_len, int *stride_data, int stride_len, int *dilation_data, int dilation_len, int64_t groups, int benchmark, int deterministic);
tensor atg_miopen_convolution_backward_weight(int *weight_size_data, int weight_size_len, tensor grad_output, tensor self, int *padding_data, int padding_len, int *stride_data, int stride_len, int *dilation_data, int dilation_len, int64_t groups, int benchmark, int deterministic);
tensor atg_miopen_convolution_transpose_backward_input(tensor grad_output, tensor weight, int *padding_data, int padding_len, int *stride_data, int stride_len, int *dilation_data, int dilation_len, int64_t groups, int benchmark, int deterministic);
tensor atg_miopen_convolution_transpose_backward_weight(int *weight_size_data, int weight_size_len, tensor grad_output, tensor self, int *padding_data, int padding_len, int *stride_data, int stride_len, int *dilation_data, int dilation_len, int64_t groups, int benchmark, int deterministic);
tensor atg_mkldnn_convolution_backward_input(int *self_size_data, int self_size_len, tensor grad_output, tensor weight, int *padding_data, int padding_len, int *stride_data, int stride_len, int *dilation_data, int dilation_len, int64_t groups, int bias_defined);
tensor atg_mm(tensor self, tensor mat2);
tensor atg_mm_out(tensor result, tensor self, tensor mat2);
tensor atg_mul(tensor self, tensor other);
tensor atg_mul_(tensor self, tensor other);
tensor atg_mul_out(tensor result, tensor self, tensor other);
tensor atg_mv(tensor self, tensor vec);
tensor atg_mv_out(tensor result, tensor self, tensor vec);
tensor atg_mvlgamma(tensor self, int64_t p);
tensor atg_narrow(tensor self, int64_t dim, int64_t start, int64_t length);
tensor atg_native_clone(tensor self);
tensor atg_native_norm(tensor self);
tensor atg_native_resize_as_(tensor self, tensor the_template);
tensor atg_native_zero_(tensor self);
tensor atg_neg(tensor self);
tensor atg_norm(tensor self);
tensor atg_norm_except_dim(tensor v, int64_t pow, int64_t dim);
tensor atg_nuclear_norm(tensor self, int keepdim);
tensor atg_nuclear_norm_out(tensor result, tensor self, int keepdim);
tensor atg_ones(int *size_data, int size_len, int options);
tensor atg_ones_like1(tensor self);
tensor atg_ones_like2(tensor self, int options);
tensor atg_ones_out(tensor result, int *size_data, int size_len);
tensor atg_pairwise_distance(tensor x1, tensor x2, double p, double eps, int keepdim);
tensor atg_pdist(tensor self, double p);
tensor atg_pin_memory(tensor self);
tensor atg_pinverse(tensor self, double rcond);
tensor atg_pixel_shuffle(tensor self, int64_t upscale_factor);
tensor atg_poisson(tensor self);
tensor atg_prelu(tensor self, tensor weight);
tensor atg_prod1(tensor self);
tensor atg_prod2(tensor self, int64_t dim, int keepdim);
tensor atg_prod_out(tensor result, tensor self, int64_t dim, int keepdim);
tensor atg_rand(int *size_data, int size_len, int options);
tensor atg_rand_like1(tensor self);
tensor atg_rand_like2(tensor self, int options);
tensor atg_rand_out(tensor result, int *size_data, int size_len);
tensor atg_randint1(int64_t high, int *size_data, int size_len, int options);
tensor atg_randint2(int64_t low, int64_t high, int *size_data, int size_len, int options);
tensor atg_randint_like1(tensor self, int64_t high);
tensor atg_randint_like2(tensor self, int64_t low, int64_t high);
tensor atg_randint_like3(tensor self, int64_t high, int options);
tensor atg_randint_like4(tensor self, int64_t low, int64_t high, int options);
tensor atg_randint_out1(tensor result, int64_t high, int *size_data, int size_len);
tensor atg_randint_out2(tensor result, int64_t low, int64_t high, int *size_data, int size_len);
tensor atg_randn(int *size_data, int size_len, int options);
tensor atg_randn_like1(tensor self);
tensor atg_randn_like2(tensor self, int options);
tensor atg_randn_out(tensor result, int *size_data, int size_len);
tensor atg_randperm(int64_t n, int options);
tensor atg_randperm_out(tensor result, int64_t n);
tensor atg_relu(tensor self);
tensor atg_relu_(tensor self);
tensor atg_reshape(tensor self, int *shape_data, int shape_len);
tensor atg_resize_as_(tensor self, tensor the_template);
tensor atg_rfft(tensor self, int64_t signal_ndim, int normalized, int onesided);
tensor atg_rnn_relu_cell(tensor input, tensor hx, tensor w_ih, tensor w_hh);
tensor atg_rnn_tanh_cell(tensor input, tensor hx, tensor w_ih, tensor w_hh);
tensor atg_roipooling2d_backward(tensor input, tensor rois, int64_t pooledHeight, int64_t pooledWidth, double spatialScale, tensor gradOutput, tensor argmaxes);
tensor atg_round(tensor self);
tensor atg_round_(tensor self);
tensor atg_round_out(tensor result, tensor self);
tensor atg_rrelu(tensor self, int training);
tensor atg_rrelu_(tensor self, int training);
tensor atg_rsqrt(tensor self);
tensor atg_rsqrt_(tensor self);
tensor atg_rsqrt_out(tensor result, tensor self);
tensor atg_s_native_addmm(tensor self, tensor mat1, tensor mat2);
tensor atg_s_native_addmm_(tensor self, tensor mat1, tensor mat2);
tensor atg_s_native_addmm_out(tensor result, tensor self, tensor mat1, tensor mat2);
tensor atg_select(tensor self, int64_t dim, int64_t index);
tensor atg_selu(tensor self);
tensor atg_selu_(tensor self);
tensor atg_set_requires_grad(tensor self, int r);
tensor atg_sigmoid(tensor self);
tensor atg_sigmoid_(tensor self);
tensor atg_sigmoid_out(tensor result, tensor self);
tensor atg_sin(tensor self);
tensor atg_sin_(tensor self);
tensor atg_sin_out(tensor result, tensor self);
tensor atg_sinh(tensor self);
tensor atg_sinh_(tensor self);
tensor atg_sinh_out(tensor result, tensor self);
tensor atg_slice(tensor self, int64_t dim, int64_t start, int64_t end, int64_t step);
tensor atg_smm(tensor self, tensor mat2);
tensor atg_softmax(tensor self, int64_t dim);
tensor atg_softmax_backward_data(tensor grad_output, tensor output, int64_t dim, tensor self);
tensor atg_sparse_coo_tensor(int *size_data, int size_len, int options);
tensor atg_sqrt(tensor self);
tensor atg_sqrt_(tensor self);
tensor atg_sqrt_out(tensor result, tensor self);
tensor atg_squeeze1(tensor self);
tensor atg_squeeze2(tensor self, int64_t dim);
tensor atg_sspaddmm(tensor self, tensor mat1, tensor mat2);
tensor atg_sspaddmm_out(tensor result, tensor self, tensor mat1, tensor mat2);
tensor atg_std1(tensor self, int unbiased);
tensor atg_std2(tensor self, int64_t dim, int unbiased, int keepdim);
tensor atg_std_out(tensor result, tensor self, int64_t dim, int unbiased, int keepdim);
tensor atg_sub(tensor self, tensor other);
tensor atg_sub_(tensor self, tensor other);
tensor atg_sub_out(tensor result, tensor self, tensor other);
tensor atg_sum1(tensor self);
tensor atg_sum2(tensor self, int *dim_data, int dim_len, int keepdim);
tensor atg_sum_out(tensor result, tensor self, int *dim_data, int dim_len, int keepdim);
tensor atg_tan(tensor self);
tensor atg_tan_(tensor self);
tensor atg_tan_out(tensor result, tensor self);
tensor atg_tanh(tensor self);
tensor atg_tanh_(tensor self);
tensor atg_tanh_out(tensor result, tensor self);
tensor atg_tensordot(tensor self, tensor other, int *dims_self_data, int dims_self_len, int *dims_other_data, int dims_other_len);
tensor atg_to(tensor self, int device);
tensor atg_totype(tensor self, int scalar_type);
tensor atg_transpose(tensor self, int64_t dim0, int64_t dim1);
tensor atg_triplet_margin_loss(tensor anchor, tensor positive, tensor negative, double margin, double p, double eps, int swap, int64_t reduction);
tensor atg_trunc(tensor self);
tensor atg_trunc_(tensor self);
tensor atg_trunc_out(tensor result, tensor self);
tensor atg_unsqueeze(tensor self, int64_t dim);
tensor atg_var1(tensor self, int unbiased);
tensor atg_var2(tensor self, int64_t dim, int unbiased, int keepdim);
tensor atg_var_out(tensor result, tensor self, int64_t dim, int unbiased, int keepdim);
tensor atg_zero_(tensor self);
tensor atg_zeros(int *size_data, int size_len, int options);
tensor atg_zeros_like1(tensor self);
tensor atg_zeros_like2(tensor self, int options);
tensor atg_zeros_out(tensor result, int *size_data, int size_len);
