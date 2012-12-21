
/*!
\ingroup PkgAlgebraicFoundationsConcepts
\cgalConcept

`AdaptableUnaryFunction` computes a double approximation of a real 
embeddable number. 

Remark: In order to control the quality of approximation one has to resort 
to methods that are specific to NT. There are no general guarantees whatsoever. 

\cgalRefines `AdaptableUnaryFunction` 

\sa `RealEmbeddableTraits`

*/

class RealEmbeddableTraits::ToDouble {
public:

/// \name Types 
/// @{

/*! 
Is `double`. 
*/ 
typedef Hidden_type result_type; 

/*! 
Is `RealEmbeddableTraits::Type`. 
*/ 
typedef Hidden_type argument_type; 

/// @} 

/// \name Operations 
/// @{

/*! 
computes a double approximation of a real embeddable number. 
*/ 
result_type operator()(argument_type x); 

/// @}

}; /* end RealEmbeddableTraits::ToDouble */
